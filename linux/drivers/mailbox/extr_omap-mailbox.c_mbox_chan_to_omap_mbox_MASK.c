
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_mbox {int dummy; } ;
struct mbox_chan {scalar_t__ con_priv; } ;



__attribute__((used)) static struct omap_mbox *FUNC_0(struct mbox_chan *VAR_0)
{
 if (!VAR_0 || !VAR_0->con_priv)
  return ((void*)0);

 return (struct omap_mbox *)VAR_0->con_priv;
}
