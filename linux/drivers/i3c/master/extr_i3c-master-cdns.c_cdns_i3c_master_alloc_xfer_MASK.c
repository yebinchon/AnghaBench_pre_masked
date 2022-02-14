
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdns_i3c_xfer {unsigned int ncmds; int ret; int node; } ;
struct cdns_i3c_master {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 struct cdns_i3c_xfer* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct cdns_i3c_xfer*,int ,unsigned int) ;

__attribute__((used)) static struct cdns_i3c_xfer *
FUNC_3(struct cdns_i3c_master *VAR_3, unsigned int VAR_4)
{
 struct cdns_i3c_xfer *VAR_5;

 VAR_5 = FUNC_1(FUNC_2(VAR_5, VAR_2, VAR_4), VAR_1);
 if (!VAR_5)
  return ((void*)0);

 FUNC_0(&VAR_5->node);
 VAR_5->ncmds = VAR_4;
 VAR_5->ret = -VAR_0;

 return VAR_5;
}
