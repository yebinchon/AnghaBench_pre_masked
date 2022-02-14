
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {unsigned char* id; } ;
struct TYPE_5__ {int extra; TYPE_1__ oid; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 TYPE_2__* VAR_2 ;

void FUNC_3(void)
{
 uint32_t VAR_3, VAR_4;
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); ++VAR_3) {
  uint32_t VAR_5 = VAR_3 / 8;
  int VAR_6 = VAR_3 - (VAR_5 * 8);

  VAR_2[VAR_3].extra = VAR_3;

  for (VAR_4 = 0; VAR_4 < VAR_0 / 4; ++VAR_4) {
   VAR_2[VAR_3].oid.id[VAR_4 * 4 ] = (unsigned char)VAR_6;
   VAR_2[VAR_3].oid.id[VAR_4 * 4 + 1] = (unsigned char)(VAR_6 >> 8);
   VAR_2[VAR_3].oid.id[VAR_4 * 4 + 2] = (unsigned char)(VAR_6 >> 16);
   VAR_2[VAR_3].oid.id[VAR_4 * 4 + 3] = (unsigned char)(VAR_6 >> 24);
  }

  VAR_2[VAR_3].oid.id[ 8] = (unsigned char)VAR_3;
  VAR_2[VAR_3].oid.id[ 9] = (unsigned char)(VAR_3 >> 8);
  VAR_2[VAR_3].oid.id[10] = (unsigned char)(VAR_3 >> 16);
  VAR_2[VAR_3].oid.id[11] = (unsigned char)(VAR_3 >> 24);
 }

 FUNC_1(FUNC_2(&VAR_1));
}
