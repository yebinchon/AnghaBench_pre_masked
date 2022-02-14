
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int** allowed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static int FUNC_1(int VAR_6, int VAR_7)
{
 if (VAR_6 < VAR_2 || VAR_6 > VAR_4 ||
     VAR_7 < VAR_2 || VAR_7 > VAR_4) {
  FUNC_0("invalid physical state(s) (old %d new %d)\n",
   VAR_6, VAR_7);
  return VAR_1;
 }

 if (VAR_7 == VAR_2)
  return VAR_0;


 VAR_6 -= VAR_3;
 VAR_7 -= VAR_3;

 if (VAR_6 < 0 || VAR_7 < 0)
  return VAR_1;
 return VAR_5.allowed[VAR_6][VAR_7];
}
