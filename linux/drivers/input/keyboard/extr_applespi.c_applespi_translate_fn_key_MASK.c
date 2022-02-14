
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct applespi_key_translation {int flags; unsigned int to; } ;


 int VAR_0 ;
 struct applespi_key_translation* FUNC_0 (int ,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_3, int VAR_4)
{
 const struct applespi_key_translation *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_1, VAR_3);
 if (VAR_5) {
  if (VAR_5->flags & VAR_0)
   VAR_6 = (VAR_2 == 2 && VAR_4) ||
           (VAR_2 == 1 && !VAR_4);
  else
   VAR_6 = VAR_4;

  if (VAR_6)
   VAR_3 = VAR_5->to;
 }

 return VAR_3;
}
