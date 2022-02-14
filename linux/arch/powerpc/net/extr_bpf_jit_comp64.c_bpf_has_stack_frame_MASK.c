
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct codegen_context {int seen; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct codegen_context*,int ) ;

__attribute__((used)) static inline bool FUNC_1(struct codegen_context *VAR_2)
{






 return VAR_2->seen & VAR_1 || FUNC_0(VAR_2, VAR_0);
}
