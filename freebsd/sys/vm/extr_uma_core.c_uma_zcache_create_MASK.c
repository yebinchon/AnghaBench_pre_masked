
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uma_zone_t ;
typedef int uma_release ;
typedef int uma_init ;
typedef int uma_import ;
typedef int uma_fini ;
typedef int uma_dtor ;
typedef int uma_ctor ;
struct uma_zctor_args {char* name; int size; int flags; scalar_t__ align; void* arg; int release; int import; int fini; int uminit; int dtor; int ctor; } ;
typedef int args ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uma_zctor_args*,int ,int) ;
 int FUNC_1 (int ,struct uma_zctor_args*,int ,int ) ;
 int VAR_3 ;

uma_zone_t
FUNC_2(char *VAR_4, int VAR_5, uma_ctor VAR_6, uma_dtor VAR_7,
      uma_init VAR_8, uma_fini VAR_9, uma_import VAR_10,
      uma_release VAR_11, void *VAR_12, int VAR_13)
{
 struct uma_zctor_args VAR_14;

 FUNC_0(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.name = VAR_4;
 VAR_14.size = VAR_5;
 VAR_14.ctor = VAR_6;
 VAR_14.dtor = VAR_7;
 VAR_14.uminit = VAR_8;
 VAR_14.fini = VAR_9;
 VAR_14.import = VAR_10;
 VAR_14.release = VAR_11;
 VAR_14.arg = VAR_12;
 VAR_14.align = 0;
 VAR_14.flags = VAR_13 | VAR_2;

 return (FUNC_1(VAR_3, &VAR_14, VAR_1, VAR_0));
}
