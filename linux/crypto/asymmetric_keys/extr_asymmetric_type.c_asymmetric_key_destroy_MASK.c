
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct asymmetric_key_ids** data; } ;
struct key {TYPE_1__ payload; } ;
struct asymmetric_key_subtype {int owner; int (* destroy ) (void*,void*) ;} ;
struct asymmetric_key_ids {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct asymmetric_key_ids*) ;
 struct asymmetric_key_subtype* FUNC_1 (struct key*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*,void*) ;

__attribute__((used)) static void FUNC_4(struct key *VAR_4)
{
 struct asymmetric_key_subtype *VAR_5 = FUNC_1(VAR_4);
 struct asymmetric_key_ids *VAR_6 = VAR_4->payload.data[VAR_2];
 void *VAR_7 = VAR_4->payload.data[VAR_1];
 void *VAR_8 = VAR_4->payload.data[VAR_0];

 VAR_4->payload.data[VAR_1] = ((void*)0);
 VAR_4->payload.data[VAR_3] = ((void*)0);
 VAR_4->payload.data[VAR_2] = ((void*)0);
 VAR_4->payload.data[VAR_0] = ((void*)0);

 if (VAR_5) {
  VAR_5->destroy(VAR_7, VAR_8);
  FUNC_2(VAR_5->owner);
 }

 FUNC_0(VAR_6);
}
