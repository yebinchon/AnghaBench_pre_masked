
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct disk_devdesc {int d_offset; } ;
typedef int daddr_t ;
struct TYPE_2__ {int sectorsize; int fd; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*,size_t,int) ;
 int FUNC_1 (char*,size_t,long long,long long) ;

__attribute__((used)) static int
FUNC_2(void *VAR_1, int VAR_2, daddr_t VAR_3, size_t VAR_4, char *VAR_5,
    size_t *VAR_6)
{
 struct disk_devdesc *VAR_7 = VAR_1;
 int VAR_8;

 if (VAR_2 != 1 )
  return (-1);
 if (VAR_6)
  *VAR_6 = 0;
 FUNC_1("read %zu bytes from the block %lld [+%lld]\n", VAR_4,
     (long long)VAR_3, (long long)VAR_7->d_offset);
 VAR_8 = FUNC_0(VAR_0.fd, VAR_5, VAR_4,
     (VAR_3 + VAR_7->d_offset) * VAR_0.sectorsize);
 if (VAR_8 != VAR_4)
  return (-1);
 return (0);
}
