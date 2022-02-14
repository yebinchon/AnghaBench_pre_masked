
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sin_texinfo_t ;
typedef int sin_lightvalue_t ;
typedef int sin_dvertex_t ;
typedef int sin_dsurfedges ;
typedef int sin_dplane_t ;
typedef int sin_dnode_t ;
typedef int sin_dmodel_t ;
typedef int sin_dleaffaces ;
typedef int sin_dleafbrushes ;
typedef int sin_dleaf_t ;
typedef int sin_dface_t ;
typedef int sin_dedge_t ;
typedef int sin_dbrushside_t ;
typedef int sin_dbrush_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;
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

void FUNC_2 (void)
{
 if (!VAR_0)
  FUNC_1 ();

 FUNC_0("%6i models       %7i\n"
  ,VAR_11, (int)(VAR_11*sizeof(sin_dmodel_t)));
 FUNC_0("%6i brushes      %7i\n"
  ,VAR_3, (int)(VAR_3*sizeof(sin_dbrush_t)));
 FUNC_0("%6i brushsides   %7i\n"
  ,VAR_4, (int)(VAR_4*sizeof(sin_dbrushside_t)));
 FUNC_0("%6i planes       %7i\n"
  ,VAR_13, (int)(VAR_13*sizeof(sin_dplane_t)));
 FUNC_0("%6i texinfo      %7i\n"
  ,VAR_15, (int)(VAR_15*sizeof(sin_texinfo_t)));




 FUNC_0("%6i entdata      %7i\n", VAR_0, VAR_1);

 FUNC_0("\n");

 FUNC_0("%6i vertexes     %7i\n"
  ,VAR_16, (int)(VAR_16*sizeof(sin_dvertex_t)));
 FUNC_0("%6i nodes        %7i\n"
  ,VAR_12, (int)(VAR_12*sizeof(sin_dnode_t)));
 FUNC_0("%6i faces        %7i\n"
  ,VAR_6, (int)(VAR_6*sizeof(sin_dface_t)));
 FUNC_0("%6i leafs        %7i\n"
  ,VAR_9, (int)(VAR_9*sizeof(sin_dleaf_t)));
 FUNC_0("%6i leaffaces    %7i\n"
  ,VAR_8, (int)(VAR_8*sizeof(sin_dleaffaces[0])));
 FUNC_0("%6i leafbrushes  %7i\n"
  ,VAR_7, (int)(VAR_7*sizeof(sin_dleafbrushes[0])));
 FUNC_0("%6i surfedges    %7i\n"
  ,VAR_14, (int)(VAR_14*sizeof(sin_dsurfedges[0])));
 FUNC_0("%6i edges        %7i\n"
  ,VAR_5, (int)(VAR_5*sizeof(sin_dedge_t)));
 FUNC_0("       lightdata    %7i\n", VAR_2);
 FUNC_0("       visdata      %7i\n", VAR_17);
}
