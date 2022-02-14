
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct simdisk {scalar_t__ users; int fd; int lock; int * filename; TYPE_1__* gd; } ;
struct TYPE_2__ {int disk_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int *,int ) ;
 int FUNC_2 (char*,int ,int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct simdisk *VAR_3)
{
 int VAR_4 = 0;

 FUNC_4(&VAR_3->lock);

 if (VAR_3->users != 0) {
  VAR_4 = -VAR_0;
 } else if (VAR_3->fd != -1) {
  if (FUNC_3(VAR_3->fd)) {
   FUNC_1("SIMDISK: error closing %s: %d\n",
     VAR_3->filename, VAR_2);
   VAR_4 = -VAR_1;
  } else {
   FUNC_2("SIMDISK: %s detached from %s\n",
     VAR_3->gd->disk_name, VAR_3->filename);
   VAR_3->fd = -1;
   FUNC_0(VAR_3->filename);
   VAR_3->filename = ((void*)0);
  }
 }
 FUNC_5(&VAR_3->lock);
 return VAR_4;
}
