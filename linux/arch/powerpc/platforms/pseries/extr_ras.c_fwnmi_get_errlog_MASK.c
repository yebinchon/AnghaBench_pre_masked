
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtas_error_log {int dummy; } ;
struct TYPE_2__ {scalar_t__ mce_data_buf; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline struct rtas_error_log *FUNC_0(void)
{
 return (struct rtas_error_log *)VAR_0->mce_data_buf;
}
