
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*,int,int,int,int,int,int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_1(int *VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6 = 0;


 VAR_5 = VAR_1[0];
 VAR_3 = 0;
 for (VAR_2 = 1; VAR_2 < 5; VAR_2++) {
  if (VAR_5 < VAR_1[VAR_2]) {
   VAR_5 = VAR_1[VAR_2];
   VAR_3 = VAR_2;
  }
 }


 VAR_5 = VAR_1[4];
 VAR_4 = 4;
 for (VAR_2 = 3; VAR_2 >= 0; VAR_2--) {
  if (VAR_5 > VAR_1[VAR_2]) {
   VAR_5 = VAR_1[VAR_2];
   VAR_4 = VAR_2;
  }
 }

 for (VAR_2 = 0; VAR_2 < 5; VAR_2++)
  if (VAR_2 != VAR_3 && VAR_2 != VAR_4)
   VAR_6 += VAR_1[VAR_2];

 FUNC_0(VAR_0.dev, "Average: %d from values: %d, %d, %d, %d, %d\n", VAR_6/3, VAR_1[0], VAR_1[1], VAR_1[2], VAR_1[3], VAR_1[4]);

 return VAR_6/3;
}
