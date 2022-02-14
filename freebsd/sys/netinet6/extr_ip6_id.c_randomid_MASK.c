
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
typedef int u_int32_t ;
struct randomtab {scalar_t__ ru_counter; scalar_t__ ru_max; scalar_t__ ru_reseed; int ru_x; int ru_m; int ru_seed; int ru_msb; int ru_n; scalar_t__ ru_seed2; int ru_g; scalar_t__ ru_b; scalar_t__ ru_a; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct randomtab*) ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static u_int32_t
FUNC_3(struct randomtab *VAR_1)
{
 int VAR_2, VAR_3;

 if (VAR_1->ru_counter >= VAR_1->ru_max || VAR_0 > VAR_1->ru_reseed)
  FUNC_1(VAR_1);


 VAR_3 = FUNC_0() & 0x3;
 if (VAR_1->ru_counter + VAR_3 >= VAR_1->ru_max)
  FUNC_1(VAR_1);

 for (VAR_2 = 0; VAR_2 <= VAR_3; VAR_2++) {

  VAR_1->ru_x = (u_int32_t)((u_int64_t)VAR_1->ru_a * VAR_1->ru_x + VAR_1->ru_b) % VAR_1->ru_m;
 }

 VAR_1->ru_counter += VAR_2;

 return (VAR_1->ru_seed ^ FUNC_2(VAR_1->ru_g, VAR_1->ru_seed2 + VAR_1->ru_x, VAR_1->ru_n)) |
     VAR_1->ru_msb;
}
