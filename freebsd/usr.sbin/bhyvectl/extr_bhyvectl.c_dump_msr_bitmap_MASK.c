
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 char const* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (char const*,int) ;
 char* FUNC_3 (int *,int,int ,int ,int,int ) ;
 int FUNC_4 (void*,int) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(int VAR_5, uint64_t VAR_6, bool VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 const char *VAR_11;

 VAR_8 = -1;
 VAR_11 = VAR_0;

 VAR_9 = FUNC_5("/dev/mem", VAR_2, 0);
 if (VAR_9 < 0) {
  FUNC_6("Couldn't open /dev/mem");
  goto done;
 }

 if (VAR_7)
  VAR_10 = VAR_3;
 else
  VAR_10 = 2 * VAR_3;

 VAR_11 = FUNC_3(((void*)0), VAR_10, VAR_4, VAR_1, VAR_9, VAR_6);
 if (VAR_11 == VAR_0) {
  FUNC_6("mmap failed");
  goto done;
 }

 if (VAR_7)
  FUNC_2(VAR_11, VAR_5);
 else
  FUNC_1(VAR_11, VAR_5);

 VAR_8 = 0;
done:
 if (VAR_11 != VAR_0)
  FUNC_4((void *)VAR_11, VAR_10);
 if (VAR_9 >= 0)
  FUNC_0(VAR_9);

 return (VAR_8);
}
