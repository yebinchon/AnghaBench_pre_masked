
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GRawData ;
typedef size_t GModule ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__,size_t,int ) ;
 int * VAR_1 ;
 int * FUNC_2 (size_t) ;

__attribute__((used)) static void
FUNC_3 (GModule VAR_2)
{
  GRawData *VAR_3;


  VAR_3 = FUNC_2 (VAR_2);
  if (!VAR_3) {
    FUNC_0 (("raw data is NULL for module: %d.\n", VAR_2));
    return;
  }

  FUNC_1 (VAR_3, VAR_0 + VAR_2, VAR_2, VAR_1[VAR_2]);
}
