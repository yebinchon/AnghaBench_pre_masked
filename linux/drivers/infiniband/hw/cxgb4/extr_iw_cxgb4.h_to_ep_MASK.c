
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iw_cm_id {struct c4iw_ep* provider_data; } ;
struct c4iw_ep {int dummy; } ;



__attribute__((used)) static inline struct c4iw_ep *FUNC_0(struct iw_cm_id *VAR_0)
{
 return VAR_0->provider_data;
}
