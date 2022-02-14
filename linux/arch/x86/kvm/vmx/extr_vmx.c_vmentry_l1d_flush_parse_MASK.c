
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int option; scalar_t__ for_parse; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_2(const char *VAR_2)
{
 unsigned int VAR_3;

 if (VAR_2) {
  for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
   if (VAR_1[VAR_3].for_parse &&
       FUNC_1(VAR_2, VAR_1[VAR_3].option))
    return VAR_3;
  }
 }
 return -VAR_0;
}
