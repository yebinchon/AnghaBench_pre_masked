
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dbfs_d204_hdr {int dummy; } ;
struct TYPE_2__ {int len; int sc; int version; } ;
struct dbfs_d204 {TYPE_1__ hdr; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int VAR_4 ;
 struct dbfs_d204* FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(void **VAR_5, void **VAR_6, size_t *VAR_7)
{
 struct dbfs_d204 *VAR_8;
 int VAR_9, VAR_10;
 void *VAR_11;

 VAR_10 = VAR_2 * (VAR_3 + 1) + sizeof(VAR_8->hdr);
 VAR_11 = FUNC_3(VAR_10);
 if (!VAR_11)
  return -VAR_1;
 VAR_8 = FUNC_1(VAR_11 + sizeof(VAR_8->hdr)) - sizeof(VAR_8->hdr);
 VAR_9 = FUNC_0(VAR_8->buf, VAR_3);
 if (VAR_9) {
  FUNC_2(VAR_11);
  return VAR_9;
 }
 VAR_8->hdr.version = VAR_0;
 VAR_8->hdr.len = VAR_2 * VAR_3;
 VAR_8->hdr.sc = VAR_4;
 *VAR_5 = VAR_8;
 *VAR_6 = VAR_11;
 *VAR_7 = VAR_8->hdr.len + sizeof(struct dbfs_d204_hdr);
 return 0;
}
