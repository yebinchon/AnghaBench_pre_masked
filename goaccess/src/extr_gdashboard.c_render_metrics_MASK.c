
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_17__ ;


struct TYPE_20__ {int module; } ;
struct TYPE_19__ {scalar_t__ sub_graph; scalar_t__ graph; scalar_t__ data; scalar_t__ protocol; scalar_t__ method; scalar_t__ maxts; scalar_t__ cumts; scalar_t__ avgts; scalar_t__ bw; scalar_t__ percent; scalar_t__ visitors; scalar_t__ hits; } ;
struct TYPE_18__ {scalar_t__ append_protocol; scalar_t__ append_method; scalar_t__ serve_usecs; scalar_t__ bandwidth; } ;
typedef TYPE_1__ GOutput ;
typedef int GModule ;
typedef int GDashRender ;
typedef TYPE_2__ GDashModule ;


 TYPE_17__ VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ,int*) ;
 int FUNC_3 (TYPE_2__*,int ,int*) ;
 int FUNC_4 (TYPE_2__*,int ,int*) ;
 int FUNC_5 (TYPE_2__*,int ,int*) ;
 int FUNC_6 (TYPE_2__*,int ,int*) ;
 int FUNC_7 (TYPE_2__*,int ,int*) ;
 int FUNC_8 (TYPE_2__*,int ,int*) ;
 int FUNC_9 (TYPE_2__*,int ,int*) ;
 int FUNC_10 (TYPE_2__*,int ,int*) ;
 int FUNC_11 (TYPE_2__*,int ,int*) ;
 int FUNC_12 (TYPE_2__*,int ,int*) ;
 int FUNC_13 (TYPE_2__*,int ,int*) ;

__attribute__((used)) static void
FUNC_14 (GDashModule * VAR_1, GDashRender VAR_2, int VAR_3)
{
  int VAR_4 = FUNC_0 ();
  GModule VAR_5 = VAR_1->module;
  const GOutput *VAR_6 = FUNC_1 (VAR_5);


  if (VAR_6->hits)
    FUNC_7 (VAR_1, VAR_2, &VAR_4);
  if (VAR_6->percent)
    FUNC_8 (VAR_1, VAR_2, &VAR_4);
  if (VAR_6->visitors)
    FUNC_12 (VAR_1, VAR_2, &VAR_4);
  if (VAR_6->percent)
    FUNC_13 (VAR_1, VAR_2, &VAR_4);


  if (VAR_0.bandwidth && VAR_6->bw)
    FUNC_4 (VAR_1, VAR_2, &VAR_4);


  if (VAR_6->avgts && VAR_0.serve_usecs)
    FUNC_2 (VAR_1, VAR_2, &VAR_4);
  if (VAR_6->cumts && VAR_0.serve_usecs)
    FUNC_5 (VAR_1, VAR_2, &VAR_4);
  if (VAR_6->maxts && VAR_0.serve_usecs)
    FUNC_9 (VAR_1, VAR_2, &VAR_4);


  if (VAR_6->method && VAR_0.append_method)
    FUNC_10 (VAR_1, VAR_2, &VAR_4);

  if (VAR_6->protocol && VAR_0.append_protocol)
    FUNC_11 (VAR_1, VAR_2, &VAR_4);
  if (VAR_6->data)
    FUNC_6 (VAR_1, VAR_2, &VAR_4);


  if ((VAR_6->graph && !VAR_3) || (VAR_6->sub_graph && VAR_3))
    FUNC_3 (VAR_1, VAR_2, &VAR_4);
}
