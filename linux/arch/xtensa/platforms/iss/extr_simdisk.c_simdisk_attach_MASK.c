
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct simdisk {int fd; int size; char const* filename; int lock; TYPE_1__* gd; } ;
struct TYPE_2__ {int disk_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,int ) ;
 int FUNC_2 (char*,char const*,int ) ;
 int FUNC_3 (char*,int ,char const*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (char const*,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct simdisk *VAR_8, const char *VAR_9)
{
 int VAR_10 = 0;

 VAR_9 = FUNC_1(VAR_9, VAR_3);
 if (VAR_9 == ((void*)0))
  return -VAR_2;

 FUNC_7(&VAR_8->lock);

 if (VAR_8->fd != -1) {
  VAR_10 = -VAR_0;
  goto out;
 }
 VAR_8->fd = FUNC_6(VAR_9, VAR_4, 0);
 if (VAR_8->fd == -1) {
  FUNC_2("SIMDISK: Can't open %s: %d\n", VAR_9, VAR_7);
  VAR_10 = -VAR_1;
  goto out;
 }
 VAR_8->size = FUNC_5(VAR_8->fd, 0, VAR_6);
 FUNC_4(VAR_8->gd, VAR_8->size >> VAR_5);
 VAR_8->filename = VAR_9;
 FUNC_3("SIMDISK: %s=%s\n", VAR_8->gd->disk_name, VAR_8->filename);
out:
 if (VAR_10)
  FUNC_0(VAR_9);
 FUNC_8(&VAR_8->lock);

 return VAR_10;
}
