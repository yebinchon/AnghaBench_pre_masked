
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stream_filter {int dummy; } ;
struct object_id {int dummy; } ;
struct index_state {int dummy; } ;
struct conv_attrs {scalar_t__ crlf_action; scalar_t__ ident; scalar_t__ working_tree_encoding; TYPE_1__* drv; } ;
struct TYPE_2__ {scalar_t__ clean; scalar_t__ smudge; scalar_t__ process; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct stream_filter* FUNC_0 (struct stream_filter*,int *) ;
 int FUNC_1 (struct index_state const*,struct conv_attrs*,char const*) ;
 struct stream_filter* FUNC_2 (struct object_id const*) ;
 int * FUNC_3 () ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (scalar_t__) ;

struct stream_filter *FUNC_5(const struct index_state *VAR_4,
     const char *VAR_5,
     const struct object_id *VAR_6)
{
 struct conv_attrs VAR_7;
 struct stream_filter *VAR_8 = ((void*)0);

 FUNC_1(VAR_4, &VAR_7, VAR_5);
 if (VAR_7.drv && (VAR_7.drv->process || VAR_7.drv->smudge || VAR_7.drv->clean))
  return ((void*)0);

 if (VAR_7.working_tree_encoding)
  return ((void*)0);

 if (VAR_7.crlf_action == VAR_0 || VAR_7.crlf_action == VAR_1)
  return ((void*)0);

 if (VAR_7.ident)
  VAR_8 = FUNC_2(VAR_6);

 if (FUNC_4(VAR_7.crlf_action) == VAR_2)
  VAR_8 = FUNC_0(VAR_8, FUNC_3());
 else
  VAR_8 = FUNC_0(VAR_8, &VAR_3);

 return VAR_8;
}
