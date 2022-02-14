
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_size; } ;
struct packed_git {int dummy; } ;
struct TYPE_2__ {unsigned int rawsz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,unsigned int const,void*,size_t,struct packed_git*) ;
 int FUNC_5 (void*,size_t) ;
 TYPE_1__* VAR_2 ;
 void* FUNC_6 (int *,size_t,int ,int ,int,int ) ;
 size_t FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(const char *VAR_3, struct packed_git *VAR_4)
{
 void *VAR_5;
 size_t VAR_6;
 int VAR_7 = FUNC_3(VAR_3), VAR_8;
 struct stat VAR_9;
 const unsigned int VAR_10 = VAR_2->rawsz;

 if (VAR_7 < 0)
  return -1;
 if (FUNC_2(VAR_7, &VAR_9)) {
  FUNC_0(VAR_7);
  return -1;
 }
 VAR_6 = FUNC_7(VAR_9.st_size);
 if (VAR_6 < 4 * 256 + VAR_10 + VAR_10) {
  FUNC_0(VAR_7);
  return FUNC_1("index file %s is too small", VAR_3);
 }
 VAR_5 = FUNC_6(((void*)0), VAR_6, VAR_1, VAR_0, VAR_7, 0);
 FUNC_0(VAR_7);

 VAR_8 = FUNC_4(VAR_3, VAR_10, VAR_5, VAR_6, VAR_4);

 if (VAR_8)
  FUNC_5(VAR_5, VAR_6);

 return VAR_8;
}
