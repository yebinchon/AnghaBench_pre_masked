
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_3__ {int sectorSize; } ;
typedef TYPE_1__ iso9660_disk ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (unsigned char const*,int,int,int *) ;

__attribute__((used)) static int
FUNC_4(iso9660_disk *VAR_1, FILE *VAR_2, off_t VAR_3,
    const unsigned char *VAR_4, int VAR_5)
{
 off_t VAR_6;
 size_t VAR_7;

 VAR_6 = FUNC_2(VAR_2);

 if (FUNC_1(VAR_2, VAR_3 * VAR_1->sectorSize, VAR_0) == -1)
  FUNC_0(1, "fseeko");

 VAR_7 = FUNC_3(VAR_4, VAR_1->sectorSize * VAR_5, 1, VAR_2);

 if (FUNC_1(VAR_2, VAR_6, VAR_0) == -1)
  FUNC_0(1, "fseeko");

 if (VAR_7 == 1)
  VAR_7 = VAR_1->sectorSize * VAR_5;
 return VAR_7;
}
