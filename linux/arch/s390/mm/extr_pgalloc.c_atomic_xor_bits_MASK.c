
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atomic_t ;


 unsigned int FUNC_0 (int *,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (int *) ;

__attribute__((used)) static inline unsigned int FUNC_2(atomic_t *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2, VAR_3;

 do {
  VAR_2 = FUNC_1(VAR_0);
  VAR_3 = VAR_2 ^ VAR_1;
 } while (FUNC_0(VAR_0, VAR_2, VAR_3) != VAR_2);
 return VAR_3;
}
