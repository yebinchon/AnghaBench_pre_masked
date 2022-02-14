
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct stb0899_internal {int status; int t_derot; } ;
struct stb0899_state {int verbose; struct stb0899_internal internal; } ;
typedef void* s8 ;
typedef enum stb0899_status { ____Placeholder_stb0899_status } stb0899_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,int ,int,char*) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (struct stb0899_state*,int ) ;
 int FUNC_5 (struct stb0899_state*,int ,int) ;

__attribute__((used)) static enum stb0899_status FUNC_6(struct stb0899_state *VAR_7)
{
 struct stb0899_internal *VAR_8 = &VAR_7->internal;
 int VAR_9;
 u8 VAR_10;
 s8 VAR_11;

 FUNC_3(VAR_8->t_derot);

 FUNC_5(VAR_7, VAR_3, 0xf2);
 VAR_10 = FUNC_4(VAR_7, VAR_4);
 VAR_9 = FUNC_0(VAR_6, VAR_10);
 VAR_11 = FUNC_4(VAR_7, VAR_3);

 if (VAR_9 >= 42) {
  if ((VAR_9 > 48) && (FUNC_1(VAR_11) >= 110)) {
   VAR_8->status = VAR_0;
   FUNC_2(VAR_7->verbose, VAR_1, 1, "-->ANALOG Carrier !");
  } else {
   VAR_8->status = VAR_5;
   FUNC_2(VAR_7->verbose, VAR_1, 1, "------->TIMING OK !");
  }
 } else {
  VAR_8->status = VAR_2;
  FUNC_2(VAR_7->verbose, VAR_1, 1, "-->NO TIMING !");
 }
 return VAR_8->status;
}
