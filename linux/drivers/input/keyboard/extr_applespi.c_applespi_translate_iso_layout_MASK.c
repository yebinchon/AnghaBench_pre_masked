
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct applespi_key_translation {unsigned int to; } ;


 int VAR_0 ;
 struct applespi_key_translation* FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_1)
{
 const struct applespi_key_translation *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  VAR_1 = VAR_2->to;

 return VAR_1;
}
