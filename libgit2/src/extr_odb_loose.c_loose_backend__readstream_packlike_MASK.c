
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int type; } ;
typedef TYPE_2__ obj_hdr ;
struct TYPE_7__ {unsigned char* data; size_t len; } ;
struct TYPE_9__ {int zstream; TYPE_1__ map; } ;
typedef TYPE_3__ loose_readstream ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned char const*,size_t) ;
 int FUNC_3 (TYPE_2__*,size_t*,unsigned char const*,size_t) ;

__attribute__((used)) static int FUNC_4(
 obj_hdr *VAR_1,
 loose_readstream *VAR_2)
{
 const unsigned char *VAR_3;
 size_t VAR_4, VAR_5;
 int VAR_6;

 VAR_3 = VAR_2->map.data;
 VAR_4 = VAR_2->map.len;





 if ((VAR_6 = FUNC_3(VAR_1, &VAR_5, VAR_3, VAR_4)) < 0)
  return VAR_6;

 if (!FUNC_1(VAR_1->type)) {
  FUNC_0(VAR_0, "failed to inflate loose object");
  return -1;
 }

 return FUNC_2(&VAR_2->zstream,
  VAR_3 + VAR_5, VAR_4 - VAR_5);
}
