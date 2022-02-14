
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct wacom {int lock; } ;
typedef int ssize_t ;


 int FUNC_0 (char const*,int,unsigned int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wacom*) ;

__attribute__((used)) static ssize_t FUNC_4(struct wacom *VAR_0, u8 *VAR_1,
         const char *VAR_2, size_t VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, 10, &VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_1(&VAR_0->lock);

 *VAR_1 = VAR_4 & 0x7f;
 VAR_5 = FUNC_3(VAR_0);

 FUNC_2(&VAR_0->lock);

 return VAR_5 < 0 ? VAR_5 : VAR_3;
}
