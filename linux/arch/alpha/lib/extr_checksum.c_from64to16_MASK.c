
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned short FUNC_0(unsigned long VAR_0)
{



 union {
  unsigned long ul;
  unsigned int ui[2];
  unsigned short us[4];
 } VAR_1, VAR_2, VAR_3;

 VAR_1.ul = VAR_0;
 VAR_2.ul = (unsigned long) VAR_1.ui[0] + (unsigned long) VAR_1.ui[1];



 VAR_3.ul = (unsigned long) VAR_2.us[0] + (unsigned long) VAR_2.us[1]
   + (unsigned long) VAR_2.us[2];


 return VAR_3.us[0] + VAR_3.us[1];
}
