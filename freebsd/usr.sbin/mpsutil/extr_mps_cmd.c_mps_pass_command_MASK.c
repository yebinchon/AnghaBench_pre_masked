
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint64_t ;
typedef void* uint32_t ;
struct mprs_pass_thru {void* Timeout; int DataDirection; void* DataSize; void* PtrData; void* DataOutSize; void* PtrDataOut; void* ReplySize; void* RequestSize; void* PtrReply; void* PtrRequest; } ;
typedef int pass ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct mprs_pass_thru*,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int,int ,struct mprs_pass_thru*) ;
 scalar_t__ VAR_10 ;

int
FUNC_2(int VAR_11, void *VAR_12, uint32_t VAR_13, void *VAR_14,
 uint32_t VAR_15, void *VAR_16, uint32_t VAR_17, void *VAR_18,
 uint32_t VAR_19, uint32_t VAR_20)
{
 struct mprs_pass_thru VAR_21;

 FUNC_0(&VAR_21, sizeof(VAR_21));
 VAR_21.PtrRequest = (uint64_t)(uintptr_t)VAR_12;
 VAR_21.PtrReply = (uint64_t)(uintptr_t)VAR_14;
 VAR_21.RequestSize = VAR_13;
 VAR_21.ReplySize = VAR_15;
 if (VAR_17 && VAR_19) {
  VAR_21.PtrData = (uint64_t)(uintptr_t)VAR_16;
  VAR_21.PtrDataOut = (uint64_t)(uintptr_t)VAR_18;
  VAR_21.DataSize = VAR_17;
  VAR_21.DataOutSize = VAR_19;
  if (VAR_10) {
   VAR_21.DataDirection = VAR_4;
  } else {
   VAR_21.DataDirection = VAR_0;
  }
 } else if (VAR_17) {
  VAR_21.PtrData = (uint64_t)(uintptr_t)VAR_16;
  VAR_21.DataSize = VAR_17;
  if (VAR_10) {
   VAR_21.DataDirection = VAR_6;
  } else {
   VAR_21.DataDirection = VAR_2;
  }
 } else if (VAR_19) {
  VAR_21.PtrData = (uint64_t)(uintptr_t)VAR_18;
  VAR_21.DataSize = VAR_19;
  if (VAR_10) {
   VAR_21.DataDirection = VAR_7;
  } else {
   VAR_21.DataDirection = VAR_3;
  }
 } else {
  if (VAR_10) {
   VAR_21.DataDirection = VAR_5;
  } else {
   VAR_21.DataDirection = VAR_1;
  }
 }
 VAR_21.Timeout = VAR_20;

 if (FUNC_1(VAR_11, VAR_8, &VAR_21) < 0)
  return (VAR_9);
 return (0);
}
