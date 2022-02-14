
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int texinfo_t ;
typedef int dvertex_t ;
typedef int dsurfedges ;
typedef int dplane_t ;
typedef int dnode_t ;
typedef int dmodel_t ;
typedef int dleaffaces ;
typedef int dleafbrushes ;
typedef int dleaf_t ;
typedef int dface_t ;
typedef int dedge_t ;
typedef int dbrushside_t ;
typedef int dbrush_t ;
typedef int dareaportal_t ;
typedef int darea_t ;


 int FUNC_0 () ;
 int VAR_0 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (char*,...) ;
 int VAR_18 ;

void FUNC_2 (void)
{
 if (!VAR_2)
  FUNC_0();

 FUNC_1 ("%6i models       %7i\n"
  ,VAR_12, (int)(VAR_12*sizeof(dmodel_t)));
 FUNC_1 ("%6i brushes      %7i\n"
  ,VAR_5, (int)(VAR_5*sizeof(dbrush_t)));
 FUNC_1 ("%6i brushsides   %7i\n"
  ,VAR_6, (int)(VAR_6*sizeof(dbrushside_t)));
 FUNC_1 ("%6i planes       %7i\n"
  ,VAR_14, (int)(VAR_14*sizeof(dplane_t)));
 FUNC_1 ("%6i texinfo      %7i\n"
  ,VAR_16, (int)(VAR_16*sizeof(texinfo_t)));
 FUNC_1 ("%6i entdata      %7i\n", VAR_2, VAR_0);

 FUNC_1 ("\n");

 FUNC_1 ("%6i vertexes     %7i\n"
  ,VAR_17, (int)(VAR_17*sizeof(dvertex_t)));
 FUNC_1 ("%6i nodes        %7i\n"
  ,VAR_13, (int)(VAR_13*sizeof(dnode_t)));
 FUNC_1 ("%6i faces        %7i\n"
  ,VAR_8, (int)(VAR_8*sizeof(dface_t)));
 FUNC_1 ("%6i leafs        %7i\n"
  ,VAR_11, (int)(VAR_11*sizeof(dleaf_t)));
 FUNC_1 ("%6i leaffaces    %7i\n"
  ,VAR_10, (int)(VAR_10*sizeof(dleaffaces[0])));
 FUNC_1 ("%6i leafbrushes  %7i\n"
  ,VAR_9, (int)(VAR_9*sizeof(dleafbrushes[0])));
 FUNC_1 ("%6i surfedges    %7i\n"
  ,VAR_15, (int)(VAR_15*sizeof(dsurfedges[0])));
 FUNC_1 ("%6i edges        %7i\n"
  ,VAR_7, (int)(VAR_7*sizeof(dedge_t)));

 FUNC_1 ("%6i areas        %7i\n"
  ,VAR_4, (int)(VAR_4*sizeof(darea_t)));
 FUNC_1 ("%6i areaportals  %7i\n"
  ,VAR_3, (int)(VAR_3*sizeof(dareaportal_t)));

 FUNC_1 ("      lightdata    %7i\n", VAR_1);
 FUNC_1 ("      visdata      %7i\n", VAR_18);
}
