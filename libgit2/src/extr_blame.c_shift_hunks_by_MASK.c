
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t length; scalar_t__* contents; } ;
typedef TYPE_1__ git_vector ;
struct TYPE_6__ {int final_start_line_number; } ;
typedef TYPE_2__ git_blame_hunk ;


 int FUNC_0 (size_t*,TYPE_1__*,int ,size_t*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(git_vector *VAR_1, size_t VAR_2, int VAR_3)
{
 size_t VAR_4;

 if (!FUNC_0(&VAR_4, VAR_1, VAR_0, &VAR_2)) {
  for (; VAR_4 < VAR_1->length; VAR_4++) {
   git_blame_hunk *VAR_5 = (git_blame_hunk*)VAR_1->contents[VAR_4];
   VAR_5->final_start_line_number += VAR_3;
  }
 }
}
