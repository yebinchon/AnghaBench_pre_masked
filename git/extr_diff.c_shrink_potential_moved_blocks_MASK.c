
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct moved_block {scalar_t__ match; } ;
typedef int pmb ;


 int FUNC_0 (struct moved_block*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct moved_block *VAR_0,
      int VAR_1)
{
 int VAR_2, VAR_3;


 for (VAR_2 = 0, VAR_3 = VAR_1 - 1; VAR_2 <= VAR_3;) {
  while (VAR_2 < VAR_1 && VAR_0[VAR_2].match)
   VAR_2++;


  while (VAR_3 > -1 && !VAR_0[VAR_3].match)
   VAR_3--;


  if (VAR_2 < VAR_1 && VAR_3 > -1 && VAR_2 < VAR_3) {
   VAR_0[VAR_2] = VAR_0[VAR_3];
   FUNC_0(&VAR_0[VAR_3], 0, sizeof(VAR_0[VAR_3]));
   VAR_3--;
   VAR_2++;
  }
 }


 return VAR_3 + 1;
}
