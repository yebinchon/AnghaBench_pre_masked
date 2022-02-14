
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct git_hash_algo {char* name; } ;
typedef int git_hash_ctx ;
typedef double clock_t ;


 int FUNC_0 (unsigned int*) ;
 double VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 double VAR_3 ;
 double FUNC_1 () ;
 int FUNC_2 (struct git_hash_algo const*,int *,unsigned char*,void*,unsigned int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void*) ;
 struct git_hash_algo* VAR_4 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char const*,char*) ;
 void* FUNC_8 (int,unsigned int) ;

int FUNC_9(int VAR_5, const char **VAR_6)
{
 git_hash_ctx VAR_7;
 unsigned char VAR_8[VAR_2];
 clock_t VAR_9, VAR_10, VAR_11;
 unsigned VAR_12[] = { 64, 256, 1024, 8192, 16384 };
 int VAR_13;
 void *VAR_14;
 const struct git_hash_algo *VAR_15 = ((void*)0);

 if (VAR_5 == 2) {
  for (VAR_13 = 1; VAR_13 < VAR_1; VAR_13++) {
   if (!FUNC_7(VAR_6[1], VAR_4[VAR_13].name)) {
    VAR_15 = &VAR_4[VAR_13];
    break;
   }
  }
 }
 if (!VAR_15)
  FUNC_3("usage: test-tool hash-speed algo_name");


 VAR_9 = FUNC_1();

 FUNC_6("algo: %s\n", VAR_15->name);

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_12); VAR_13++) {
  unsigned long VAR_16, VAR_17;
  double VAR_18;
  VAR_14 = FUNC_8(1, VAR_12[VAR_13]);
  VAR_10 = VAR_11 = FUNC_1() - VAR_9;
  for (VAR_16 = 0; ((VAR_11 - VAR_10) / VAR_0) < VAR_3; VAR_16++) {
   FUNC_2(VAR_15, &VAR_7, VAR_8, VAR_14, VAR_12[VAR_13]);





   if (!(VAR_16 & 127))
    VAR_11 = FUNC_1() - VAR_9;
  }
  VAR_17 = VAR_16 * VAR_12[VAR_13];
  VAR_18 = VAR_17 / (1024 * ((double)VAR_11 - VAR_10) / VAR_0);
  FUNC_6("size %u: %lu iters; %lu KiB; %0.2f KiB/s\n", VAR_12[VAR_13], VAR_16, VAR_17, VAR_18);
  FUNC_5(VAR_14);
 }

 FUNC_4(0);
}
