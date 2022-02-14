
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ json_pretty_print; } ;
struct TYPE_4__ {scalar_t__ lbl; scalar_t__ datakey; scalar_t__ datatype; scalar_t__ metalbl; scalar_t__ metatype; scalar_t__ metakey; scalar_t__ cwidth; scalar_t__ cname; } ;
typedef TYPE_1__ GDefMetric ;
typedef int FILE ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__,int,int) ;

__attribute__((used)) static void
FUNC_1 (FILE * VAR_1, const GDefMetric VAR_2, int VAR_3)
{
  int VAR_4 = 0;


  if (VAR_0.json_pretty_print)
    VAR_4 = VAR_3 + 1;

  if (VAR_2.cname)
    FUNC_0 (VAR_1, "className", VAR_2.cname, VAR_4, 0);
  if (VAR_2.cwidth)
    FUNC_0 (VAR_1, "colWidth", VAR_2.cwidth, VAR_4, 0);
  if (VAR_2.metakey)
    FUNC_0 (VAR_1, "meta", VAR_2.metakey, VAR_4, 0);
  if (VAR_2.metatype)
    FUNC_0 (VAR_1, "metaType", VAR_2.metatype, VAR_4, 0);
  if (VAR_2.metalbl)
    FUNC_0 (VAR_1, "metaLabel", VAR_2.metalbl, VAR_4, 0);
  if (VAR_2.datatype)
    FUNC_0 (VAR_1, "dataType", VAR_2.datatype, VAR_4, 0);
  if (VAR_2.datakey)
    FUNC_0 (VAR_1, "key", VAR_2.datakey, VAR_4, 0);
  if (VAR_2.lbl)
    FUNC_0 (VAR_1, "label", VAR_2.lbl, VAR_4, 1);
}
