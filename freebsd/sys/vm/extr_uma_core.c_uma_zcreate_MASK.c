
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uma_zone_t ;
typedef int * uma_init ;
typedef int * uma_fini ;
typedef int * uma_dtor ;
typedef int * uma_ctor ;
typedef int uint32_t ;
struct uma_zctor_args {char const* name; size_t size; int align; int flags; int * keg; int * fini; int * uminit; int * dtor; int * ctor; } ;
typedef int args ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct uma_zctor_args*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int ,struct uma_zctor_args*,int ,int ) ;
 int VAR_12 ;

uma_zone_t
FUNC_6(const char *VAR_13, size_t VAR_14, uma_ctor VAR_15, uma_dtor VAR_16,
  uma_init VAR_17, uma_fini VAR_18, int VAR_19, uint32_t VAR_20)

{
 struct uma_zctor_args VAR_21;
 uma_zone_t VAR_22;
 bool VAR_23;

 FUNC_0(FUNC_2(VAR_19 + 1), ("invalid zone alignment %d for \"%s\"",
     VAR_19, VAR_13));







 FUNC_1(&VAR_21, 0, sizeof(VAR_21));
 VAR_21.name = VAR_13;
 VAR_21.size = VAR_14;
 VAR_21.ctor = VAR_15;
 VAR_21.dtor = VAR_16;
 VAR_21.uminit = VAR_17;
 VAR_21.fini = VAR_18;
 VAR_21.align = VAR_19;
 VAR_21.flags = VAR_20;
 VAR_21.keg = ((void*)0);

 if (VAR_6 < VAR_0) {
  VAR_23 = 0;
 } else {
  FUNC_3(&VAR_11);
  VAR_23 = 1;
 }
 VAR_22 = FUNC_5(VAR_12, &VAR_21, VAR_2, VAR_1);
 if (VAR_23)
  FUNC_4(&VAR_11);
 return (VAR_22);
}
