
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
struct vmctx {int dummy; } ;
struct stat {int st_size; } ;
typedef int ssize_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (int,char*,int) ;
 int VAR_9 ;
 char* FUNC_5 (int ) ;
 char* FUNC_6 (struct vmctx*,int ,char*,int) ;
 scalar_t__ FUNC_7 (struct vmctx*,int,int ,int ,int,int) ;

int
FUNC_8(struct vmctx *VAR_10, const char *VAR_11)
{
 struct stat VAR_12;
 vm_paddr_t VAR_13;
 ssize_t VAR_14;
 char *VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_18 = -1;
 VAR_16 = FUNC_3(VAR_11, VAR_2);
 if (VAR_16 < 0) {
  FUNC_1(VAR_9, "Error opening bootrom \"%s\": %s\n",
      VAR_11, FUNC_5(VAR_8));
  goto done;
 }

        if (FUNC_2(VAR_16, &VAR_12) < 0) {
  FUNC_1(VAR_9, "Could not fstat bootrom file \"%s\": %s\n",
      VAR_11, FUNC_5(VAR_8));
  goto done;
        }





 if (VAR_12.st_size > VAR_1 || VAR_12.st_size < VAR_4) {
  FUNC_1(VAR_9, "Invalid bootrom size %d\n", VAR_12.st_size);
  goto done;
 }

 if (VAR_12.st_size & VAR_3) {
  FUNC_1(VAR_9, "Bootrom size %d is not a multiple of the "
      "page size\n", VAR_12.st_size);
  goto done;
 }

 VAR_15 = FUNC_6(VAR_10, VAR_7, "bootrom", VAR_12.st_size);
 if (VAR_15 == VAR_0)
  goto done;


 VAR_19 = VAR_6 | VAR_5;
 VAR_13 = (1ULL << 32) - VAR_12.st_size;
 if (FUNC_7(VAR_10, VAR_13, VAR_7, 0, VAR_12.st_size, VAR_19) != 0)
  goto done;


 for (VAR_17 = 0; VAR_17 < VAR_12.st_size / VAR_4; VAR_17++) {
  VAR_14 = FUNC_4(VAR_16, VAR_15 + VAR_17 * VAR_4, VAR_4);
  if (VAR_14 != VAR_4) {
   FUNC_1(VAR_9, "Incomplete read of page %d of bootrom "
       "file %s: %zd bytes\n", VAR_17, VAR_11, VAR_14);
   goto done;
  }
 }
 VAR_18 = 0;
done:
 if (VAR_16 >= 0)
  FUNC_0(VAR_16);
 return (VAR_18);
}
