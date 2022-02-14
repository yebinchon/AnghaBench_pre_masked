
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int offset; int file; } ;
struct mddev {TYPE_2__* pers; TYPE_1__ bitmap_info; } ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 (struct mddev*) ;
 int FUNC_1 (char*,int ,int ) ;

int FUNC_2(struct mddev *VAR_0)
{
 if (!VAR_0->bitmap_info.file && !VAR_0->bitmap_info.offset)
  return 0;
 FUNC_1("%s: bitmaps are not supported for %s\n",
  FUNC_0(VAR_0), VAR_0->pers->name);
 return 1;
}
