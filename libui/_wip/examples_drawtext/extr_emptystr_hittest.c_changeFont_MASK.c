
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uiFontButton ;
struct TYPE_3__ {scalar_t__ Family; double Size; scalar_t__ Stretch; scalar_t__ Italic; scalar_t__ Weight; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,scalar_t__,double,int,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(uiFontButton *VAR_3, void *VAR_4)
{
 if (VAR_0.Family != VAR_2)
  FUNC_3(VAR_0.Family);

 FUNC_2(VAR_1, &VAR_0);
 FUNC_0("{\n\tfamily: %s\n\tsize: %g\n\tweight: %d\n\titalic: %d\n\tstretch: %d\n}\n",
  VAR_0.Family,
  VAR_0.Size,
  (int) (VAR_0.Weight),
  (int) (VAR_0.Italic),
  (int) (VAR_0.Stretch));
 FUNC_1();
}
