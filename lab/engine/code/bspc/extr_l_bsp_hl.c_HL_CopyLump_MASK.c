
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int byte ;
struct TYPE_4__ {TYPE_1__* lumps; } ;
struct TYPE_3__ {int filelen; int fileofs; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (void*,int *,int) ;
 int FUNC_2 (char*,int,...) ;

int FUNC_3 (int VAR_2, void *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;

 VAR_6 = VAR_1->lumps[VAR_2].filelen;
 VAR_7 = VAR_1->lumps[VAR_2].fileofs;

 if (VAR_6 % VAR_4) {
  FUNC_0 ("LoadBSPFile: odd lump size");
 }

 if ((VAR_6/VAR_4) > VAR_5) {
  FUNC_2("WARNING: exceeded max size for lump %d size %d > maxsize %d\n", VAR_2, (VAR_6/VAR_4), VAR_5);
  VAR_6 = VAR_5 * VAR_4;
 }
 if ( VAR_7 + VAR_6 > VAR_0 ) {
  FUNC_2("WARNING: exceeded file length for lump %d\n", VAR_2);
  VAR_6 = VAR_0 - VAR_7;
  if ( VAR_6 <= 0 ) {
   return 0;
  }
 }

 FUNC_1 (VAR_3, (byte *)VAR_1 + VAR_7, VAR_6);

 return VAR_6 / VAR_4;
}
