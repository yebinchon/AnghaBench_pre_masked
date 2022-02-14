
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int __be32 ;
struct TYPE_2__ {long status; void* result; void* buf_size; void* buf; } ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 long FUNC_3 (int ,int *,int *) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static inline void FUNC_4(void)
{
 long VAR_1;
 void *VAR_2 = VAR_0.buf;
 __be32 VAR_3 = FUNC_2(VAR_0.buf_size);
 __be32 VAR_4;

 VAR_1 = FUNC_3(FUNC_0(VAR_2), &VAR_3, &VAR_4);

 VAR_0.status = VAR_1;
 VAR_0.buf_size = FUNC_1(VAR_3);
 VAR_0.result = FUNC_1(VAR_4);
}
