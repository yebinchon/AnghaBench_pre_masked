
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unittype {scalar_t__ offset; int factor; scalar_t__ quantity; } ;


 int FUNC_0 (char**,char*,char*,...) ;
 scalar_t__ FUNC_1 (struct unittype*,struct unittype*) ;
 int FUNC_2 (char*) ;
 char* VAR_0 ;
 char* VAR_1 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct unittype*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;

__attribute__((used)) static void
FUNC_5(struct unittype * VAR_5, struct unittype * VAR_6)
{
 double VAR_7;
 char* VAR_8;

 if (FUNC_1(VAR_5, VAR_6)) {
  FUNC_3("conformability error\n");
  if (VAR_3)
   FUNC_3("\t%s = ", VAR_0);
  else if (!VAR_2)
   FUNC_3("\t");
  FUNC_4(VAR_5);
  if (!VAR_2) {
   if (VAR_3)
    FUNC_3("\t%s = ", VAR_4);
   else
    FUNC_3("\t");
   FUNC_4(VAR_6);
  }
 }
 else if (VAR_5->offset != VAR_6->offset) {
  if (VAR_6->quantity)
   FUNC_3("WARNING: conversion of non-proportional quantities.\n");
  if (VAR_5->quantity) {
   FUNC_0(&VAR_8, "\t%s\n", VAR_1);
   FUNC_3(VAR_8,
       (VAR_5->factor + VAR_5->offset-VAR_6->offset)/VAR_6->factor);
   FUNC_2(VAR_8);
  }
  else {
   FUNC_0(&VAR_8, "\t (-> x*%sg %sg)\n\t (<- y*%sg %sg)\n",
       VAR_1, VAR_1, VAR_1, VAR_1);
   FUNC_3(VAR_8,
       VAR_5->factor / VAR_6->factor,
       (VAR_5->offset-VAR_6->offset)/VAR_6->factor,
       VAR_6->factor / VAR_5->factor,
       (VAR_6->offset - VAR_5->offset)/VAR_5->factor);
  }
 }
 else {
  VAR_7 = VAR_5->factor / VAR_6->factor;

  if (VAR_3) {
   FUNC_3("\t%s = ", VAR_0);
   FUNC_3(VAR_1, VAR_7);
   FUNC_3(" * %s", VAR_4);
   FUNC_3("\n");
  }
  else if (VAR_2) {
   FUNC_3(VAR_1, VAR_7);
   FUNC_3("\n");
  }
  else {
   FUNC_3("\t* ");
   FUNC_3(VAR_1, VAR_7);
   FUNC_3("\n");
  }

  if (VAR_3) {
   FUNC_3("\t%s = (1 / ", VAR_0);
   FUNC_3(VAR_1, 1/VAR_7);
   FUNC_3(") * %s\n", VAR_4);
  }
  else if (!VAR_2) {
   FUNC_3("\t/ ");
   FUNC_3(VAR_1, 1/VAR_7);
   FUNC_3("\n");
  }
 }
}
