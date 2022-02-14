
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {int index; } ;
struct diff_filespec {int is_binary; int size; scalar_t__ data; TYPE_1__* driver; } ;
struct TYPE_2__ {int binary; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct diff_filespec*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct diff_filespec*,int ) ;
 int FUNC_3 (struct repository*,struct diff_filespec*,int ) ;

int FUNC_4(struct repository *VAR_1,
       struct diff_filespec *VAR_2)
{
 if (VAR_2->is_binary == -1) {
  FUNC_2(VAR_2, VAR_1->index);
  if (VAR_2->driver->binary != -1)
   VAR_2->is_binary = VAR_2->driver->binary;
  else {
   if (!VAR_2->data && FUNC_0(VAR_2))
    FUNC_3(VAR_1, VAR_2, VAR_0);
   if (VAR_2->is_binary == -1 && VAR_2->data)
    VAR_2->is_binary = FUNC_1(VAR_2->data,
      VAR_2->size);
   if (VAR_2->is_binary == -1)
    VAR_2->is_binary = 0;
  }
 }
 return VAR_2->is_binary;
}
