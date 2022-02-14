
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int texinfo_t ;
typedef int dheader_t ;
struct TYPE_8__ {scalar_t__ ident; scalar_t__ version; TYPE_1__* lumps; } ;
struct TYPE_7__ {int filelen; int fileofs; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (TYPE_2__*,int,int,int *) ;
 int FUNC_8 (int *,int,int ) ;
 TYPE_2__* VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;

void FUNC_9 (char *VAR_7)
{
 int VAR_8;
 FILE *VAR_9;
 int VAR_10, VAR_11;

 VAR_4 = FUNC_2(sizeof(dheader_t));

 VAR_9 = FUNC_6 (VAR_7, "rb");
 FUNC_7 (VAR_4, sizeof(dheader_t), 1, VAR_9);


 for (VAR_8=0 ; VAR_8< sizeof(dheader_t)/4 ; VAR_8++)
  ((int *)VAR_4)[VAR_8] = FUNC_3 ( ((int *)VAR_4)[VAR_8]);

 if (VAR_4->ident != VAR_1)
  FUNC_0 ("%s is not a IBSP file", VAR_7);
 if (VAR_4->version != VAR_0)
  FUNC_0 ("%s is version %i, not %i", VAR_7, VAR_4->version, VAR_0);


 VAR_10 = VAR_4->lumps[VAR_2].filelen;
 VAR_11 = VAR_4->lumps[VAR_2].fileofs;

 FUNC_8 (VAR_9, VAR_11, VAR_3);
 FUNC_7 (VAR_6, VAR_10, 1, VAR_9);
 FUNC_5 (VAR_9);

 VAR_5 = VAR_10 / sizeof(texinfo_t);

 FUNC_1(VAR_4);

 FUNC_4 (0);
}
