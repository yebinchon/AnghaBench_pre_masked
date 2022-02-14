
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct bkey {int * ptr; } ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (struct bkey const*) ;
 int FUNC_2 (struct bkey*,int ) ;
 int FUNC_3 (struct bkey*,int) ;
 int FUNC_4 (struct bkey*,struct bkey const*,int) ;

void FUNC_5(struct bkey *VAR_0, const struct bkey *VAR_1,
         unsigned int VAR_2)
{
 FUNC_0(VAR_2 > FUNC_1(VAR_1));


 FUNC_4(VAR_0, VAR_1, 2 * sizeof(uint64_t));
 VAR_0->ptr[0] = VAR_1->ptr[VAR_2];
 FUNC_3(VAR_0, 1);

 FUNC_2(VAR_0, 0);
}
