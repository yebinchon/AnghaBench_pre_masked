
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packed_git {int dummy; } ;
struct pack_window {int dummy; } ;
struct hashfile {int dummy; } ;
typedef long off_t ;


 int FUNC_0 (struct hashfile*,unsigned char*,unsigned long) ;
 unsigned char* FUNC_1 (struct packed_git*,struct pack_window**,long,unsigned long*) ;

__attribute__((used)) static void FUNC_2(struct hashfile *VAR_0,
  struct packed_git *VAR_1,
  struct pack_window **VAR_2,
  off_t VAR_3,
  off_t VAR_4)
{
 unsigned char *VAR_5;
 unsigned long VAR_6;

 while (VAR_4) {
  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_6);
  if (VAR_6 > VAR_4)
   VAR_6 = (unsigned long)VAR_4;
  FUNC_0(VAR_0, VAR_5, VAR_6);
  VAR_3 += VAR_6;
  VAR_4 -= VAR_6;
 }
}
