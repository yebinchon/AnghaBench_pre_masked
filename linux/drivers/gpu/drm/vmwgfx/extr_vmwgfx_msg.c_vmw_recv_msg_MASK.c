
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_channel {unsigned long cookie_high; unsigned long cookie_low; int channel_id; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned long) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int,unsigned long,unsigned long,int,int ,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (size_t,int ) ;
 unsigned long FUNC_5 (struct rpc_channel*,char*,size_t,int) ;

__attribute__((used)) static int FUNC_6(struct rpc_channel *VAR_11, void **VAR_12,
   size_t *VAR_13)
{
 unsigned long VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 char *VAR_20;
 size_t VAR_21;
 int VAR_22 = 0;


 *VAR_13 = 0;
 *VAR_12 = ((void*)0);

 while (VAR_22 < VAR_7) {
  VAR_22++;


  VAR_18 = VAR_11->cookie_high;
  VAR_19 = VAR_11->cookie_low;

  FUNC_2(VAR_9,
   0, VAR_18, VAR_19,
   VAR_11->channel_id << 16,
   VAR_8,
   VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19);

  if ((FUNC_1(VAR_16) & VAR_6) == 0) {
   FUNC_0("Failed to get reply size for host message.\n");
   return -VAR_0;
  }


  if ((FUNC_1(VAR_16) & VAR_4) == 0)
   return 0;

  VAR_21 = VAR_15;
  VAR_20 = FUNC_4(VAR_21 + 1, VAR_2);
  if (!VAR_20) {
   FUNC_0("Cannot allocate memory for host message reply.\n");
   return -VAR_1;
  }



  VAR_15 = FUNC_5(VAR_11, VAR_20, VAR_21,
         !!(FUNC_1(VAR_16) & VAR_5));
  if ((FUNC_1(VAR_15) & VAR_6) == 0) {
   FUNC_3(VAR_20);
   VAR_20 = ((void*)0);
   if ((FUNC_1(VAR_15) & VAR_3) != 0) {

    continue;
   }

   return -VAR_0;
  }

  VAR_20[VAR_21] = '\0';



  VAR_18 = VAR_11->cookie_high;
  VAR_19 = VAR_11->cookie_low;

  FUNC_2(VAR_10,
   VAR_6, VAR_18, VAR_19,
   VAR_11->channel_id << 16,
   VAR_8,
   VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19);

  if ((FUNC_1(VAR_16) & VAR_6) == 0) {
   FUNC_3(VAR_20);
   VAR_20 = ((void*)0);
   if ((FUNC_1(VAR_16) & VAR_3) != 0) {

    continue;
   }

   return -VAR_0;
  }

  break;
 }

 if (!VAR_20)
  return -VAR_0;

 *VAR_13 = VAR_21;
 *VAR_12 = VAR_20;

 return 0;
}
