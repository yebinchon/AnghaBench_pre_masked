
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
struct simdisk_softc {int sectors; int sbuf; } ;
typedef int XML_Parser ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,struct simdisk_softc*) ;
 struct simdisk_softc* FUNC_7 (int,int) ;
 int VAR_4 ;
 int FUNC_8 (int) ;
 int VAR_5 ;
 int FUNC_9 (int,char const*) ;
 int FUNC_10 (int,char*,int) ;
 int FUNC_11 (int,struct stat*) ;
 char* FUNC_12 (int *,int ,int ,int,int,int ) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (char const*,int ) ;
 int FUNC_15 () ;
 int VAR_6 ;

__attribute__((used)) static struct simdisk_softc *
FUNC_16(const char *VAR_7)
{
 XML_Parser VAR_8 = FUNC_2(((void*)0));
 struct stat VAR_9;
 char *VAR_10;
 struct simdisk_softc *VAR_11;
 int VAR_12, VAR_13;

 VAR_11 = FUNC_7(1, sizeof *VAR_11);
 VAR_11->sbuf = FUNC_15();
 FUNC_0(&VAR_11->sectors);
 FUNC_6(VAR_8, VAR_11);
 FUNC_5(VAR_8, VAR_6, VAR_5);
 FUNC_4(VAR_8, VAR_4);

 VAR_12 = FUNC_14(VAR_7, VAR_2);
 if (VAR_12 < 0)
  FUNC_9(1, VAR_7);
 FUNC_11(VAR_12, &VAR_9);
 VAR_10 = FUNC_12(((void*)0), VAR_9.st_size, VAR_3, VAR_0|VAR_1, VAR_12, 0);
 VAR_13 = FUNC_1(VAR_8, VAR_10, VAR_9.st_size, 1);
 if (VAR_13 != 1)
  FUNC_10(1, "XML_Parse complains: return %d", VAR_13);
 FUNC_13(VAR_10, VAR_9.st_size);
 FUNC_8(VAR_12);
 FUNC_3(VAR_8);
 return (VAR_11);
}
