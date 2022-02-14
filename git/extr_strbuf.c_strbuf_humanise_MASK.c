
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
typedef int off_t ;


 int FUNC_0 (char*,char*,unsigned int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct strbuf*,int ,unsigned int,...) ;

__attribute__((used)) static void FUNC_3(struct strbuf *VAR_0, off_t VAR_1,
     int VAR_2)
{
 if (VAR_1 > 1 << 30) {
  FUNC_2(VAR_0,
    VAR_2 == 0 ?

     FUNC_1("%u.%2.2u GiB") :

     FUNC_1("%u.%2.2u GiB/s"),
       (unsigned)(VAR_1 >> 30),
       (unsigned)(VAR_1 & ((1 << 30) - 1)) / 10737419);
 } else if (VAR_1 > 1 << 20) {
  unsigned VAR_3 = VAR_1 + 5243;
  FUNC_2(VAR_0,
    VAR_2 == 0 ?

     FUNC_1("%u.%2.2u MiB") :

     FUNC_1("%u.%2.2u MiB/s"),
       VAR_3 >> 20, ((VAR_3 & ((1 << 20) - 1)) * 100) >> 20);
 } else if (VAR_1 > 1 << 10) {
  unsigned VAR_4 = VAR_1 + 5;
  FUNC_2(VAR_0,
    VAR_2 == 0 ?

     FUNC_1("%u.%2.2u KiB") :

     FUNC_1("%u.%2.2u KiB/s"),
       VAR_4 >> 10, ((VAR_4 & ((1 << 10) - 1)) * 100) >> 10);
 } else {
  FUNC_2(VAR_0,
    VAR_2 == 0 ?

     FUNC_0("%u byte", "%u bytes", (unsigned)VAR_1) :

     FUNC_0("%u byte/s", "%u bytes/s", (unsigned)VAR_1),
    (unsigned)VAR_1);
 }
}
