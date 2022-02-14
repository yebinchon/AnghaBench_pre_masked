
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwch_listen_ep {int dummy; } ;
struct iw_cm_id {struct iwch_listen_ep* provider_data; } ;



__attribute__((used)) static inline struct iwch_listen_ep *FUNC_0(struct iw_cm_id *VAR_0)
{
 return VAR_0->provider_data;
}
