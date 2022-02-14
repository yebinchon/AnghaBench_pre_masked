
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport {struct bundle_transport_data* data; } ;
struct bundle_transport_data {scalar_t__ fd; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct bundle_transport_data*) ;

__attribute__((used)) static int FUNC_2(struct transport *VAR_0)
{
 struct bundle_transport_data *VAR_1 = VAR_0->data;
 if (VAR_1->fd > 0)
  FUNC_0(VAR_1->fd);
 FUNC_1(VAR_1);
 return 0;
}
