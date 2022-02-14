
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_10__ {scalar_t__ append_protocol; scalar_t__ append_method; scalar_t__ serve_usecs; scalar_t__ bandwidth; scalar_t__ no_column_names; } ;
struct TYPE_7__ {int hits_len; int method_len; scalar_t__ bw_len; scalar_t__ visitors_perc_len; scalar_t__ visitors_len; scalar_t__ hits_perc_len; } ;
struct TYPE_9__ {scalar_t__ idx_data; TYPE_1__ meta; int module; } ;
struct TYPE_8__ {scalar_t__ data; scalar_t__ protocol; scalar_t__ method; scalar_t__ maxts; scalar_t__ cumts; scalar_t__ avgts; scalar_t__ bw; scalar_t__ percent; scalar_t__ visitors; scalar_t__ hits; } ;
typedef TYPE_2__ GOutput ;
typedef int GModule ;
typedef TYPE_3__ GDashModule ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_6__ VAR_12 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int,int*,int,char*,int ) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int*,scalar_t__,char*,int ) ;

__attribute__((used)) static void
FUNC_4 (WINDOW * VAR_13, GDashModule * VAR_14, int *VAR_15)
{
  GModule VAR_16 = VAR_14->module;
  const GOutput *VAR_17 = FUNC_2 (VAR_16);
  int VAR_18 = FUNC_0 ();

  if (VAR_14->idx_data == 0 || VAR_12.no_column_names)
    return;

  if (VAR_17->hits)
    FUNC_1 (VAR_13, *VAR_15, &VAR_18, VAR_14->meta.hits_len, "%s", VAR_5);

  if (VAR_17->percent)
    FUNC_3 (VAR_13, *VAR_15, &VAR_18, VAR_14->meta.hits_perc_len + 4, "%*s",
                VAR_6);

  if (VAR_17->visitors)
    FUNC_3 (VAR_13, *VAR_15, &VAR_18, VAR_14->meta.visitors_len, "%*s",
                VAR_11);

  if (VAR_17->percent)
    FUNC_3 (VAR_13, *VAR_15, &VAR_18, VAR_14->meta.visitors_perc_len + 4, "%*s",
                VAR_10);

  if (VAR_17->bw && VAR_12.bandwidth)
    FUNC_3 (VAR_13, *VAR_15, &VAR_18, VAR_14->meta.bw_len, "%*s", VAR_2);

  if (VAR_17->avgts && VAR_12.serve_usecs)
    FUNC_3 (VAR_13, *VAR_15, &VAR_18, VAR_0, "%*s", VAR_1);

  if (VAR_17->cumts && VAR_12.serve_usecs)
    FUNC_3 (VAR_13, *VAR_15, &VAR_18, VAR_0, "%*s", VAR_3);

  if (VAR_17->maxts && VAR_12.serve_usecs)
    FUNC_3 (VAR_13, *VAR_15, &VAR_18, VAR_0, "%*s", VAR_7);

  if (VAR_17->method && VAR_12.append_method)
    FUNC_1 (VAR_13, *VAR_15, &VAR_18, VAR_14->meta.method_len, "%s",
                VAR_8);

  if (VAR_17->protocol && VAR_12.append_protocol)
    FUNC_1 (VAR_13, *VAR_15, &VAR_18, 8, "%s", VAR_9);

  if (VAR_17->data)
    FUNC_1 (VAR_13, *VAR_15, &VAR_18, 4, "%s", VAR_4);
}
