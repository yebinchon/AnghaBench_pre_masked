
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* metrics; } ;
struct TYPE_4__ {scalar_t__ member_0; scalar_t__ metric; void* dbpath; void* store; int dbname; int * member_3; int * member_2; int member_1; } ;
typedef TYPE_1__ GTCStorageMetric ;
typedef size_t GModule ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 void* FUNC_1 (int ,size_t) ;
 void* FUNC_2 (void*) ;
 void* FUNC_3 (void*) ;
 void* FUNC_4 (int ,size_t) ;
 TYPE_2__* VAR_28 ;

__attribute__((used)) static void
FUNC_5 (GModule VAR_29)
{
  GTCStorageMetric VAR_30;
  int VAR_31 = 0, VAR_32;


  GTCStorageMetric VAR_33[] = {
    {VAR_19 , VAR_5 , ((void*)0), ((void*)0)} ,
    {VAR_25 , VAR_11 , ((void*)0), ((void*)0)} ,
    {VAR_17 , VAR_3 , ((void*)0), ((void*)0)} ,
    {VAR_26 , VAR_12 , ((void*)0), ((void*)0)} ,
    {VAR_24 , VAR_10 , ((void*)0), ((void*)0)} ,
    {VAR_18 , VAR_4 , ((void*)0), ((void*)0)} ,
    {VAR_27 , VAR_13 , ((void*)0), ((void*)0)} ,
    {VAR_15 , VAR_1 , ((void*)0), ((void*)0)} ,
    {VAR_16 , VAR_2 , ((void*)0), ((void*)0)} ,
    {VAR_20 , VAR_6 , ((void*)0), ((void*)0)} ,
    {VAR_22 , VAR_8 , ((void*)0), ((void*)0)} ,
    {VAR_23 , VAR_9 , ((void*)0), ((void*)0)} ,
    {VAR_14 , VAR_0 , ((void*)0), ((void*)0)} ,
    {VAR_21 , VAR_7 , ((void*)0), ((void*)0)} ,
  };


  VAR_31 = FUNC_0 (VAR_33);
  for (VAR_32 = 0; VAR_32 < VAR_31; VAR_32++) {
    VAR_30 = VAR_33[VAR_32];
    VAR_28[VAR_29].metrics[VAR_32] = VAR_30;
  }
}
